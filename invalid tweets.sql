--Problem
--Write a solution to find the IDs of the invalid tweets. The tweet is invalid if the number of characters used in the content of the tweet is strictly greater than 15.
--Return the result table in any order

--Create table If Not Exists Tweets(tweet_id int, content varchar(50))
--Truncate table Tweets
--insert into Tweets (tweet_id, content) values ('1', 'Let us Code')
--insert into Tweets (tweet_id, content) values ('2', 'More than fifteen chars are here!')

--SOlution
select tweet_id
from Tweets
Where LENGTH(content) >= 15

--What i Learend
--LENGTH() (or LEN() in SQL Server) is a function, not a keyword.
--Always wrap the column in parentheses: LENGTH(content) <= 15.
