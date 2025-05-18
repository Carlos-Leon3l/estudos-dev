--Triggers

create table EMP(empno number(4) primary key, ENAME
varchar(10), SAL number(10,2));

-- criando uma cópia da tabela emp
CREATE TABLE COPIAEMP AS SELECT EMPNO,ENAME,SAL FROM
EMP;

--criando algo 
insert into emp values(1, 'carlos', 2000);
insert into emp values(2, 'jorge', 3000);
insert into emp values(3, 'ronaldo', 4000);
UPDATE EMP SET SAL = 2500 WHERE EMPNO = 1;


-- Incluindo coluna para data e tipo da operação
ALTER TABLE COPIAEMP ADD DATA_OPERACAO DATE;
ALTER TABLE COPIAEMP ADD OPERACAO CHAR(1);
   
CREATE OR REPLACE TRIGGER INSERE
BEFORE INSERT
ON EMP
FOR EACH ROW
BEGIN
INSERT INTO COPIAEMP
VALUES(:NEW.EMPNO,:NEW.ENAME,:NEW.SAL,SYSDATE,
'I');
END;
/

-- alterar

create or replace trigger ALTERA_OLD
BEFORE UPDATE
ON EMP
FOR EACH ROW
BEGIN
 INSERT INTO COPIAEMP(EMPNO,ENAME,SAL,DATA_OPERACAO,OPERACAO)
 VALUES(:OLD.EMPNO,:NEW.ENAME,:NEW.SAL,SYSDATE,'A');
 -- Aqui registramos os novos dados na COPIAEMP após a atualização
END;
/

-- elimina
-- criando os gatilho de controle de eliminação
create or replace trigger ELIMINA
AFTER DELETE
ON EMP
FOR EACH ROW
BEGIN
 INSERT INTO COPIAEMP(EMPNO,ENAME,SAL,DATA_OPERACAO,OPERACAO)
 VALUES(:OLD.EMPNO,:OLD.ENAME,:OLD.SAL,SYSDATE,'E');
END;
/
  
DELETE FROM EMP WHERE EMPNO= 2;

-- ver tabelas; 
desc emp;
SELECT * FROM EMP;
SELECT * FROM COPIAEMP;  -- selecionamos para ver se eliminou em EMP e inseriu em COPIAEMP 