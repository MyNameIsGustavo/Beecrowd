/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: PostgreSQL.
	Nome do exercício: Senhas.
	ID: 2744
	Status da submissão: ACEITA.
*/

SELECT id, password, MD5(password)
FROM account;