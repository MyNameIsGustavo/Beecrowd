/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: PostgreSQL.
	Nome do exercício: Locações de Setembro.	
	ID: 2614
	Status da submissão: ACEITA.
*/

SELECT Clientes.name, Relatorio.rentals_date
FROM customers as Clientes

INNER JOIN rentals as Relatorio ON Clientes.id = Relatorio.id_customers
WHERE Relatorio.rentals_date BETWEEN '2016/09/01' AND '2016/09/30';