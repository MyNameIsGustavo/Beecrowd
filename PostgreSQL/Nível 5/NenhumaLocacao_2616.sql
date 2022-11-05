/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: PostgreSQL.
	Nome do exercício: Nenhuma Locação.	
	ID: 2616
	Status da submissão: ACEITA.
*/

SELECT Clientes.id, Clientes.name
FROM customers as Clientes

WHERE Clientes.id NOT IN
(   SELECT Locacoes.id_customers 
    FROM locations as Locacoes
    WHERE Locacoes.id_customers = Clientes.id
);