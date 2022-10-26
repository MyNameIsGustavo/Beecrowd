/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: PostgreSQL.
	Nome do exercício: Fornecedor Ajax SA. 
	ID: 2617
	Status da submissão: ACEITA.
*/

SELECT products.name, providers.name
FROM products, providers
WHERE products.id_providers = providers.id AND providers.name = 'Ajax SA';