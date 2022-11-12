/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: PostgreSQL.
	Nome do exercício: Máscara de CPF.
	ID: 2625
	Status da submissão: ACEITA.
*/

SELECT regexp_replace(natural_person.cpf, '(\d{3})(\d{3})(\d{3})(\d{2})', '\1.\2.\3-\4')
FROM natural_person;