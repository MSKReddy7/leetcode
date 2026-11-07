# Write your MySQL query statement below
select firstName, lastName, city, state
from person left join address
on address.personId = person.personId;