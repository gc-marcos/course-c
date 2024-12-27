create database Loja;

use Loja;

create table Estado(
ID int primary key auto_increment,
Nome varchar(50) not null,
UF char(2) not null
);

create table Municipio(
ID int primary key auto_increment,
fk_Estado_ID int not null,
Nome varchar(80),
CodIBGE int not null, 
foreign key (fk_Estado_ID) references Estado(ID)
);



create table Cliente(
ID int primary key auto_increment,
Nome varchar(80) not null,
CPF char(11) not null,
Celular char(11) not null,
EndLogradouro varchar(100) not null,
EndNumero varchar(10) not null,
EndMunicipio int not null,
EndCEP char(8) not null,
fk_Municipio_ID int not null,
foreign key (fk_Municipio_ID) references Municipio(ID)
);

create table ContaReceber(
ID int primary key auto_increment,
fk_Cliente_ID int not null,
FaturaVendaID int not null,
DataConta date not null,
DataVencimento date not null,
Valor decimal(18,2) not null,
Situacao enum ('1','2','3') not null,
foreign key (fk_Cliente_ID) references Cliente(ID)
);

insert into Estado (Nome, UF) values
('São Paulo', 'SP'),
('Minas Gerais', 'MG'),
('Bahia', 'BH'),
('Goiás', 'GO');

select * from Estado;

insert into Municipio (fk_Estado_ID, Nome, CodIBGE) values
(1, 'Mauá', 0939000),
(2, 'Ipanema', 0929000),
(3, 'Camaçari', 0959000),
(4, ' Anápolis', 0949000);

select * from Municipio;

insert into Cliente (Nome, CPF, Celular, EndLogradouro, EndNumero, EndMunicipio, EndCEP, fk_Municipio_ID) values
('Ana Lucia', '11111111111', '1010101010', 'Rua 1', '111', 1, '11111111', 1),
('Marcos', '22222222222', '2020202020', 'Rua 2', '222', 2, '22222222', 2),
('Margarete', '33333333333', '3030303030', 'Rua 3', '333', 3, '33333333', 3),
('Matheus', '44444444444', '4040404040', 'Rua 4', '444', 4, '44444444', 4);

select *from Cliente;

insert into ContaReceber (fk_Cliente_ID, FaturaVendaID, DataConta, DataVencimento, Valor, Situacao) values
(1, 111, '2024-10-08', '2024-12-12', 100.00, '1'),
(2, 222, '2024-10-08', '2024-12-12', 200.00, '2'),
(3, 333, '2024-10-08', '2024-12-12', 300.00, '3');

select * from ContaReceber;

create view ContasNaoPagas as select 
CR.ID as 'ID da Conta a Receber',
C.Nome as 'Nome do Cliente',
C.CPF as 'CPF do Cliente',
CR.DataVencimento as 'Data do Vencimento',
CR.Valor as 'Valor da Conta'
from ContaReceber CR 
join Cliente C on CR.fk_Cliente_ID = C.ID
where CR.Situacao = '1';

select *from ContasNaoPagas;