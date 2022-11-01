/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: PostgreSQL.
	Nome do exercício: Representantes Executivos.	
	ID: 2605
	Status da submissão: ACEITA.
*/

SELECT Produtos.name, Fornecedores.name
FROM products Produtos, providers Fornecedores
WHERE products.id_providers = providers.id AND Produtos.id_categories = 6;