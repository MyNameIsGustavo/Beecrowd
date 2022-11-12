/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: PostgreSQL.
	Nome do exercício: Mais frequente.	
	ID: 2993
	Status da submissão: ACEITA.
*/

SELECT VT.amount
FROM value_table AS VT
GROUP BY amount
ORDER BY COUNT(*) DESC
LIMIT 1;