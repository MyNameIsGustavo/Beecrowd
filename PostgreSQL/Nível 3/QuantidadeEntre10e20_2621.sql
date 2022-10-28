/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: PostgreSQL.
	Nome do exercício: Quantidade entre 10 e 20. 
	ID: 2621
	Status da submissão: ACEITA.
*/

SELECT PD.name FROM providers P, products PD
WHERE PD.amount between 10 AND 20 AND P.name like 'P%' 
AND P.id = PD.id_providers;