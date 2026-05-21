-- Write your query below
with ridedata as 
(
    select rides.user_id,sum(distance) as total_distance
    from rides
    group by rides.user_id
)
select
users.name,
coalesce(ridedata.total_distance,0) as travelled_distance
from users
left join ridedata
on users.id = ridedata.user_id
order by travelled_distance desc,users.name asc

