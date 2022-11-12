/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: PostgreSQL.
	Nome do exercício: Quantidade de Caracteres.	
	ID: 2743
	Status da submissão: ACEITA.
*/

SELECT P.name, Char_Length(P.name) AS length
FROM people P
ORDER BY length DESC;