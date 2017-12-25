# Write your MySQL query statement below
SELECT DISTINCT(a.Num) AS ConsecutiveNums
FROM Logs AS a
JOIN Logs AS b
ON a.Id = b.Id - 1
JOIN Logs AS c
ON b.Id = c.Id - 1
WHERE a.Num = b.Num
AND b.Num = c.Num