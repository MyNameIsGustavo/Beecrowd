/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: PostgreSQL.
	Nome do exercício: Menores que 10 ou maiores que 100. 
	ID: 2604
	Status da submissão: ACEITA.
*/

SELECT id, name 
FROM products
WHERE price < 10 OR price > 100;