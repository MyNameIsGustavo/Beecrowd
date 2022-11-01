/*	Desenvolvedor: @Gustavo Rocha.
	Tecnologia utilizada: PostgreSQL.
	Nome do exercício: Filmes de Ação.	
	ID: 2611
	Status da submissão: ACEITA.
*/

SELECT Filmes.id, Filmes.name
FROM movies Filmes, genres Generos
WHERE Generos.description= 'Action' AND Filmes.id_genres = Generos.id;