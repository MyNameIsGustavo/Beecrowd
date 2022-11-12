/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: PostgreSQL.
	Nome do exercício: CPF dos empregados.	
	ID: 2990
	Status da submissão: ACEITA.
*/

SELECT E.cpf, E.enome, D.dnome
FROM empregados AS E
INNER JOIN departamentos as D ON D.dnumero = E.dnumero
WHERE E.cpf_supervisor is null
ORDER BY E.cpf ASC;