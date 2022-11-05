/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: PostgreSQL.
	Nome do exercício: Concurso.	
	ID: 2738
	Status da submissão: ACEITA.
*/

SELECT C.name, round((P.math * 2 + P.specific * 3 + P.project_plan * 5)/10, 2) AS avg
FROM candidate as C 

INNER JOIN score as P ON C.id = P.candidate_id
ORDER BY avg desc;