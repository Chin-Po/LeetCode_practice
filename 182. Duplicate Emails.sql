# Write your MySQL query statement below
select distinct p.Email  
from Person p  
group by p.Email  
having count(p.Email)>1; 