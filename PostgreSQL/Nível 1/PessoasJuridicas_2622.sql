/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: PostgreSQL.
	Nome do exercício: Pessoas Juridicas. 
	ID: 2622
	Status da submissão: ACEITA.
*/

SELECT customers.name 
FROM customers, legal_person
WHERE customers.id = legal_person.id_customers;