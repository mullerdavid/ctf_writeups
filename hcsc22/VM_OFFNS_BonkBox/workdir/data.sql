-- Users

insert into user (id, dtype, username, password) values
    (1, 'Cook', 'AzureDiamond', 'hunter2'),
    (2, 'Cook', 'jane', '1q2w3e');

create table authorities (
    username varchar(256) references user(username),
    authority varchar(256)
);

insert into authorities values
    ('AzureDiamond', 'USERS'),
    ('jane', 'USERS');

-- Recipes

insert into recipe (id, name, preparation, servings, uploader_id) values (
    1,
    'Pea soup',
    'Heat the oil in a saucepan over a medium heat. Add the onion and garlic and fry for 34 minutes, until softened.
Add the frozen peas and chicken or vegetable stock and bring to the boil. Reduce the heat and simmer for ten minutes.
Add the cream and use a hand blender to liquidise the soup.
Season, to taste and serve in a warm bowl, garnished with a mint leaf.',
    2,
    1
);

insert into recipe_category (recipe_id, category_name) values
    (1, 'SALTY'),
    (1, 'SOUP');

insert into recipe_ingredients (recipe_id, amount, unit, name) values
    (1, 15.0, 'MILLILITER', 'olive'),
    (1, 1.0, 'PIECE', 'garlic'),
    (1, 0.5, 'PIECE', 'onion'),
    (1, 200.0, 'GRAM', 'peas'),
    (1, 300.0, 'GRAM', 'chicken'),
    (1, 50.0, 'MILLILITER', 'cream');

insert into recipe (id, name, preparation, servings, uploader_id) values (
    2,
    'French onion soup',
    'In a 5 to 6 quart thick-bottomed pot, heat 3 tablespoons of olive oil on medium heat. Add the onions and toss to coat with the olive oil.
Add the stock, bay leaves, and thyme. Bring to a simmer, cover the pot and lower the heat to maintain a low simmer. Cook for about 30 minutes.
Brush both sides of the French bread or baguette slices lightly with olive oil (you''ll end up using about a tablespoon and a half of olive oil for this).
To serve, ladle soup into a bowl and transfer one cheesy toast onto the top of each bowl of soup.',
    4,
    2
);

insert into recipe_category (recipe_id, category_name) values
    (2, 'SALTY'),
    (2, 'SOUP');

insert into recipe_ingredients (recipe_id, amount, unit, name) values
    (2, 30.0, 'MILLILITER', 'olive'),
    (2, 6.0, 'PIECE', 'onion'),
    (2, 100.0, 'GRAM', 'butter'),
    (2, 20.0, 'GRAM', 'sugar'),
    (2, 2.0, 'PIECE', 'bay leave'),
    (2, 8.0, 'PIECE', 'french bread slice'),
    (2, 0.5, 'KILOGRAM', 'beef');

insert into recipe (id, name, preparation, servings, uploader_id) values (
    3,
    'Pancakes',
    'Put flour, eggs, milk, oil and a pinch of salt into a bowl or large jug, then whisk to a smooth batter.
Set aside for 30 mins to rest if you have time, or start cooking straight away.
Set a medium frying pan or crepe pan over a medium heat and carefully wipe it with some oiled kitchen paper.
When hot, cook your pancakes for 1 min on each side until golden, keeping them warm in a low oven as you go.
Serve with lemon wedges and caster sugar, or your favourite filling.',
    12,
    2
);

insert into recipe_ingredients (recipe_id, amount, unit, name) values
    (3, 100.0, 'GRAM', 'flour'),
    (3, 2.0, 'PIECE', 'egg'),
    (3, 300.0, 'MILLILITER', 'milk'),
    (3, 30.0, 'MILLILITER', 'oil');

insert into recipe_category (recipe_id, category_name) values
    (3, 'DESSERT'),
    (3, 'SWEET');

-- Comments

insert into comment (id, recipe_id, owner_id, timestamp, description) values
    (1, 1, 2, '2021-01-08T15:30:39.881330200', 'Very yummy.');

insert into comment (id, recipe_id, owner_id, timestamp, description) values
    (2, 3, 1, '2021-02-25T10:15:45.157740360', 'Interesting!');
