-- SELECT *
-- FROM customers
-- WHERE last_name LIKE '%field%'


-- SELECT *
-- FROM customers
-- WHERE last_name REGEXP 'field'


-- SELECT *
-- FROM customers
-- WHERE last_name REGEXP 'field'


-- beginning of the string
-- SELECT *
-- FROM customers
-- WHERE last_name REGEXP '^field'


-- end of the string
-- SELECT *
-- FROM customers
-- WHERE last_name REGEXP 'field$'


-- SELECT *
-- FROM customers
-- WHERE last_name REGEXP 'field|mac'


-- SELECT *
-- FROM customers
-- WHERE last_name REGEXP 'field|mac|rose'


-- SELECT *
-- FROM customers
-- WHERE last_name REGEXP '^field|mac|rose'


-- SELECT *
-- FROM customers
-- WHERE last_name REGEXP '[gim]e'
-- ge
-- ie
-- me


-- SELECT *
-- FROM customers
-- WHERE last_name REGEXP '[a-h]e'


-- ^ beginning
-- $ end
-- | logical or
-- [abcd]
-- [a-f]


-- SELECT *
-- FROM customers
-- WHERE first_name REGEXP 'ELKA|AMBUR'


-- SELECT *
-- FROM customers
-- WHERE last_name REGEXP 'EY$|ON$'


-- SELECT *
-- FROM customers
-- WHERE last_name REGEXP '^MY|SE'


SELECT *
FROM customers
WHERE last_name REGEXP 'B[R|U]'