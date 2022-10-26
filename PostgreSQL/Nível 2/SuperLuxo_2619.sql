/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: PostgreSQL.
	Nome do exercício: Super Luxo. 
	ID: 2619
	Status da submissão: ACEITA.
*/

SELECT products.name, providers.name, products.price 
FROM products 
INNER JOIN providers ON products.id_providers = providers.id 
INNER JOIN categories ON products.id_categories = categories.id 
WHERE products.price > 1000 AND categories.name = 'Super Luxury';