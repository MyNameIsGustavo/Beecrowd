/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: PostgreSQL.
	Nome do exercício: Quantidade de Cidades por Clients. 
	ID: 2624
	Status da submissão: ACEITA.
*/

SELECT count(DISTINCT customers.city) as count
FROM customers;