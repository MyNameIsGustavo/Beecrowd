/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: PostgreSQL.
	Nome do exercício: Dia de pagamento.	
	ID: 2739
	Status da submissão: ACEITA.
*/

-- ATENÇÃO PARA CONVERSÃO DE DADO: O resultado extraido era um DOUBLE, logo, foi necessario fazer um cast para um inteiro.
SELECT T.name as name, CAST(EXTRACT(day FROM T.payday) AS INTEGER) as day FROM loan T;