/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: PostgreSQL.
	Nome do exercício: Taxas. 
	ID: 2745
	Status da submissão: ACEITA.
*/

SELECT p.name, ROUND((salary * 0.1), 2) as tax 
FROM people P
WHERE p.salary > 3000;