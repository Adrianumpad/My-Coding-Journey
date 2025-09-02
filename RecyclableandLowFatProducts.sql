--Problem:
--Write a solution to find the ids of products that are both low fat and recyclable.
--Return the result table in any order.
--The result format is in the following example.

Solution
# Write your MySQL query statement below
SELECT product_id
FROM Products
WHERE low_fats = 'Y' AND recyclable = 'Y'

-- What i Learned
-- Understood Logical Condition AND (both condition must be true) OR (atelast one condition is true)
-- The basic structure of an SQL query.
-- How to think step by step when solving problems.
