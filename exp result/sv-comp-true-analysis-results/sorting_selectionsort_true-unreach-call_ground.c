*******************process function::  main***************
--------[B0] in ::--------
(< s 100000);
 (< s k);
 (>= k 100000);
 (< s i);
 (>= i 100000);
 (< s y);
 (>= y 100000);
 (< s x);
 (>= x 100000);
 (= _ret 0);
 
--------[B1] in ::--------
(< s 100000);
 (< s k);
 (>= k 100000);
 (< s i);
 (>= i 100000);
 (< s y);
 (>= y 100000);
 (< s x);
 (>= x 100000);
 
----------[B1]-> [B0] out -------:
(< s 100000);
 (< s k);
 (>= k 100000);
 (< s i);
 (>= i 100000);
 (< s y);
 (>= y 100000);
 (< s x);
 (>= x 100000);
 (= _ret 0);
 
--------[B2] in ::--------
(< s 100000);
 (< s k);
 (>= k 100000);
 (< s i);
 (>= i 100000);
 (< x k);
 (< x i);
 (< x 100000);
 (< s y);
 (< x y);
 (>= y 100000);
 
----------[B2]-> [B6] out -------:
(< s 100000);
 (< s k);
 (>= k 100000);
 (< s i);
 (>= i 100000);
 (< s y);
 (>= y 100000);
 
--------[B3] in ::--------
(< s 100000);
 (< s k);
 (>= k 100000);
 (< s i);
 (>= i 100000);
 (< x k);
 (< x i);
 (< x 100000);
 (< y k);
 (< y i);
 (< y 100000);
 
----------[B3]-> [B4] out -------:
(< s 100000);
 (< s k);
 (>= k 100000);
 (< s i);
 (>= i 100000);
 (< x k);
 (< x i);
 (< x 100000);
 
--------[B4] in ::--------
(< s 100000);
 (< s k);
 (>= k 100000);
 (< s i);
 (>= i 100000);
 (< x k);
 (< x i);
 (< x 100000);
 
----------[B4]-> [B3] out -------:
(< s 100000);
 (< s k);
 (>= k 100000);
 (< s i);
 (>= i 100000);
 (< x k);
 (< x i);
 (< x 100000);
 (< y k);
 (< y i);
 (< y 100000);
 
----------[B4]-> [B2] out -------:
(< s 100000);
 (< s k);
 (>= k 100000);
 (< s i);
 (>= i 100000);
 (< x k);
 (< x i);
 (< x 100000);
 (< s y);
 (< x y);
 (>= y 100000);
 
--------[B5] in ::--------
(< s 100000);
 (< s k);
 (>= k 100000);
 (< s i);
 (>= i 100000);
 (< x k);
 (< x i);
 (< x 100000);
 {(< s y)} || {(= x 0)};
 {(>= y 100000)} || {(= x 0)};
 
----------[B5]-> [B4] out -------:
(< s 100000);
 (< s k);
 (>= k 100000);
 (< s i);
 (>= i 100000);
 (< x k);
 (< x i);
 (< x 100000);
 (= y (+ x 1));
 
--------[B6] in ::--------
(< s 100000);
 (< s k);
 (>= k 100000);
 (< s i);
 (>= i 100000);
 {(< s y)} || {(= x 0)};
 {(>= y 100000)} || {(= x 0)};
 
----------[B6]-> [B5] out -------:
(< s 100000);
 (< s k);
 (>= k 100000);
 (< s i);
 (>= i 100000);
 (< x k);
 (< x i);
 (< x 100000);
 {(< s y)} || {(= x 0)};
 {(>= y 100000)} || {(= x 0)};
 
----------[B6]-> [B1] out -------:
(< s 100000);
 (< s k);
 (>= k 100000);
 (< s i);
 (>= i 100000);
 (< s y);
 (>= y 100000);
 (< s x);
 (>= x 100000);
 
--------[B7] in ::--------
(< s 100000);
 (< s k);
 (>= k 100000);
 (< s x);
 (>= x 100000);
 (< s i);
 (>= i 100000);
 
----------[B7]-> [B6] out -------:
(< s 100000);
 (< s k);
 (>= k 100000);
 (< s i);
 (>= i 100000);
 (= x 0);
 
--------[B8] in ::--------
(< s 100000);
 (< s k);
 (>= k 100000);
 (< s x);
 (>= x 100000);
 
----------[B8]-> [B27] out -------:
(< s 100000);
 (< s k);
 (>= k 100000);
 (< s x);
 (>= x 100000);
 
--------[B9] in ::--------
(< i k);
 (< i 100000);
 (< s 100000);
 (< s k);
 (>= k 100000);
 (< i x);
 (< s x);
 (>= x 100000);
 {(distinct s i)} || {(= s i)};
 {(= (select a i) tmp)} || {(= s i)};
 {exist _i0 in [0,1,100000),(= (select a _i0) tmp)} || {(= s i)};
 {exist _i0 in [0,1,k),(= (select a _i0) tmp)} || {(= s i)};
 
----------[B9]-> [B8] out -------:
(< s 100000);
 (< s k);
 (>= k 100000);
 (< s x);
 (>= x 100000);
 
--------[B10] in ::--------
(< i k);
 (< i 100000);
 (< s 100000);
 (< s k);
 (>= k 100000);
 (< x k);
 (< x 100000);
 {(distinct s i)} || {(= s i)};
 {(= (select a i) tmp)} || {(= s i)};
 {exist _i0 in [0,1,100000),(= (select a _i0) tmp)} || {(= s i)};
 {exist _i0 in [0,1,k),(= (select a _i0) tmp)} || {(= s i)};
 
----------[B10]-> [B11] out -------:
(< i k);
 (< i 100000);
 (< s 100000);
 (< s k);
 (>= k 100000);
 {(distinct s i)} || {(= s i)};
 {(= (select a i) tmp)} || {(= s i)};
 {exist _i0 in [0,1,100000),(= (select a _i0) tmp)} || {(= s i)};
 {exist _i0 in [0,1,k),(= (select a _i0) tmp)} || {(= s i)};
 
--------[B11] in ::--------
(< i k);
 (< i 100000);
 (< s 100000);
 (< s k);
 (>= k 100000);
 {(distinct s i)} || {(= s i)};
 {(= (select a i) tmp)} || {(= s i)};
 {exist _i0 in [0,1,100000),(= (select a _i0) tmp)} || {(= s i)};
 {exist _i0 in [0,1,k),(= (select a _i0) tmp)} || {(= s i)};
 
----------[B11]-> [B10] out -------:
(< i k);
 (< i 100000);
 (< s 100000);
 (< s k);
 (>= k 100000);
 (< x k);
 (< x 100000);
 {(distinct s i)} || {(= s i)};
 {(= (select a i) tmp)} || {(= s i)};
 {exist _i0 in [0,1,100000),(= (select a _i0) tmp)} || {(= s i)};
 {exist _i0 in [0,1,k),(= (select a _i0) tmp)} || {(= s i)};
 
----------[B11]-> [B9] out -------:
(< i k);
 (< i 100000);
 (< s 100000);
 (< s k);
 (>= k 100000);
 (< i x);
 (< s x);
 (>= x 100000);
 {(distinct s i)} || {(= s i)};
 {(= (select a i) tmp)} || {(= s i)};
 {exist _i0 in [0,1,100000),(= (select a _i0) tmp)} || {(= s i)};
 {exist _i0 in [0,1,k),(= (select a _i0) tmp)} || {(= s i)};
 
--------[B12] in ::--------
(< s 100000);
 (< i 100000);
 (< s k);
 (< i k);
 (>= k 100000);
 (>= x i);
 {(>= y i)} || {(= x 0)};
 {(distinct s i)} || {(= s i)};
 {(= (select a i) tmp)} || {(= s i)};
 {exist _i0 in [0,1,100000),(= (select a _i0) tmp)} || {(= s i)};
 {exist _i0 in [0,1,k),(= (select a _i0) tmp)} || {(= s i)};
 
----------[B12]-> [B11] out -------:
(< x 100000);
 (< x k);
 (< i k);
 (< i 100000);
 (< s 100000);
 (< s k);
 (>= k 100000);
 (= x i);
 {(distinct s i)} || {(= s i)};
 {(= (select a i) tmp)} || {(= s i)};
 {exist _i0 in [0,1,100000),(= (select a _i0) tmp)} || {(= s i)};
 {exist _i0 in [0,1,k),(= (select a _i0) tmp)} || {(= s i)};
 
--------[B13] in ::--------
(< s 100000);
 (< i 100000);
 (< s k);
 (< i k);
 (>= k 100000);
 (>= y i);
 {(= x 0)} || {(< x 100000)};
 {(= x 0)} || {(< x k)};
 {(= x 0)} || {(< x i)};
 {(= i 0)} || {(< x 100000)};
 {(= i 0)} || {(< x k)};
 {(= i 0)} || {(< x i)};
 {forall _i0 in [0,1,(+ i 1)),{(= (select a _i0) tmp)} || {(= s _i0)}} || {(< x 100000)};
 {forall _i0 in [0,1,(+ i 1)),{(= (select a _i0) tmp)} || {(= s _i0)}} || {(< x k)};
 {forall _i0 in [0,1,(+ i 1)),{(= (select a _i0) tmp)} || {(= s _i0)}} || {(< x i)};
 {(distinct s i)} || {(= s i)};
 {(= (select a i) tmp)} || {(= s i)};
 {exist _i0 in [0,1,100000),(= (select a _i0) tmp)} || {(= s i)};
 {exist _i0 in [0,1,k),(= (select a _i0) tmp)} || {(= s i)};
 
----------[B13]-> [B17] out -------:
(< s 100000);
 (< i 100000);
 (< s k);
 (< i k);
 (>= k 100000);
 (>= y i);
 {(distinct s i)} || {(= s i)};
 {(= (select a i) tmp)} || {(= s i)};
 {exist _i0 in [0,1,100000),(= (select a _i0) tmp)} || {(= s i)};
 {exist _i0 in [0,1,k),(= (select a _i0) tmp)} || {(= s i)};
 
--------[B14] in ::--------
(< s 100000);
 (< i 100000);
 (< s k);
 (< i k);
 (>= k 100000);
 (< y 100000);
 (< y k);
 (< y i);
 {(= x 0)} || {(< x 100000)};
 {(= x 0)} || {(< x k)};
 {(= x 0)} || {(< x i)};
 {(= i 0)} || {(< x 100000)};
 {(= i 0)} || {(< x k)};
 {(= i 0)} || {(< x i)};
 {forall _i0 in [0,1,(+ i 1)),{(= (select a _i0) tmp)} || {(= s _i0)}} || {(< x 100000)};
 {forall _i0 in [0,1,(+ i 1)),{(= (select a _i0) tmp)} || {(= s _i0)}} || {(< x k)};
 {forall _i0 in [0,1,(+ i 1)),{(= (select a _i0) tmp)} || {(= s _i0)}} || {(< x i)};
 {(distinct s i)} || {(= s i)};
 {(= (select a i) tmp)} || {(= s i)};
 {exist _i0 in [0,1,100000),(= (select a _i0) tmp)} || {(= s i)};
 {exist _i0 in [0,1,k),(= (select a _i0) tmp)} || {(= s i)};
 
----------[B14]-> [B15] out -------:
(< s 100000);
 (< i 100000);
 (< s k);
 (< i k);
 (>= k 100000);
 {(= x 0)} || {(< x 100000)};
 {(= x 0)} || {(< x k)};
 {(= x 0)} || {(< x i)};
 {(= i 0)} || {(< x 100000)};
 {(= i 0)} || {(< x k)};
 {(= i 0)} || {(< x i)};
 {forall _i0 in [0,1,(+ i 1)),{(= (select a _i0) tmp)} || {(= s _i0)}} || {(< x 100000)};
 {forall _i0 in [0,1,(+ i 1)),{(= (select a _i0) tmp)} || {(= s _i0)}} || {(< x k)};
 {forall _i0 in [0,1,(+ i 1)),{(= (select a _i0) tmp)} || {(= s _i0)}} || {(< x i)};
 {(distinct s i)} || {(= s i)};
 {(= (select a i) tmp)} || {(= s i)};
 {exist _i0 in [0,1,100000),(= (select a _i0) tmp)} || {(= s i)};
 {exist _i0 in [0,1,k),(= (select a _i0) tmp)} || {(= s i)};
 
--------[B15] in ::--------
(< s 100000);
 (< i 100000);
 (< s k);
 (< i k);
 (>= k 100000);
 {(= x 0)} || {(< x 100000)};
 {(= x 0)} || {(< x k)};
 {(= x 0)} || {(< x i)};
 {(= i 0)} || {(< x 100000)};
 {(= i 0)} || {(< x k)};
 {(= i 0)} || {(< x i)};
 {forall _i0 in [0,1,(+ i 1)),{(= (select a _i0) tmp)} || {(= s _i0)}} || {(< x 100000)};
 {forall _i0 in [0,1,(+ i 1)),{(= (select a _i0) tmp)} || {(= s _i0)}} || {(< x k)};
 {forall _i0 in [0,1,(+ i 1)),{(= (select a _i0) tmp)} || {(= s _i0)}} || {(< x i)};
 {(distinct s i)} || {(= s i)};
 {(= (select a i) tmp)} || {(= s i)};
 {exist _i0 in [0,1,100000),(= (select a _i0) tmp)} || {(= s i)};
 {exist _i0 in [0,1,k),(= (select a _i0) tmp)} || {(= s i)};
 
----------[B15]-> [B14] out -------:
(< s 100000);
 (< i 100000);
 (< s k);
 (< i k);
 (>= k 100000);
 (< y 100000);
 (< y k);
 (< y i);
 {(= x 0)} || {(< x 100000)};
 {(= x 0)} || {(< x k)};
 {(= x 0)} || {(< x i)};
 {(= i 0)} || {(< x 100000)};
 {(= i 0)} || {(< x k)};
 {(= i 0)} || {(< x i)};
 {forall _i0 in [0,1,(+ i 1)),{(= (select a _i0) tmp)} || {(= s _i0)}} || {(< x 100000)};
 {forall _i0 in [0,1,(+ i 1)),{(= (select a _i0) tmp)} || {(= s _i0)}} || {(< x k)};
 {forall _i0 in [0,1,(+ i 1)),{(= (select a _i0) tmp)} || {(= s _i0)}} || {(< x i)};
 {(distinct s i)} || {(= s i)};
 {(= (select a i) tmp)} || {(= s i)};
 {exist _i0 in [0,1,100000),(= (select a _i0) tmp)} || {(= s i)};
 {exist _i0 in [0,1,k),(= (select a _i0) tmp)} || {(= s i)};
 
----------[B15]-> [B13] out -------:
(< s 100000);
 (< i 100000);
 (< s k);
 (< i k);
 (>= k 100000);
 (>= y i);
 {(= x 0)} || {(< x 100000)};
 {(= x 0)} || {(< x k)};
 {(= x 0)} || {(< x i)};
 {(= i 0)} || {(< x 100000)};
 {(= i 0)} || {(< x k)};
 {(= i 0)} || {(< x i)};
 {forall _i0 in [0,1,(+ i 1)),{(= (select a _i0) tmp)} || {(= s _i0)}} || {(< x 100000)};
 {forall _i0 in [0,1,(+ i 1)),{(= (select a _i0) tmp)} || {(= s _i0)}} || {(< x k)};
 {forall _i0 in [0,1,(+ i 1)),{(= (select a _i0) tmp)} || {(= s _i0)}} || {(< x i)};
 {(distinct s i)} || {(= s i)};
 {(= (select a i) tmp)} || {(= s i)};
 {exist _i0 in [0,1,100000),(= (select a _i0) tmp)} || {(= s i)};
 {exist _i0 in [0,1,k),(= (select a _i0) tmp)} || {(= s i)};
 
--------[B16] in ::--------
(< s 100000);
 (< i 100000);
 (< s k);
 (< i k);
 (>= k 100000);
 (< x 100000);
 (< x k);
 (< x i);
 {(>= y i)} || {(= x 0)};
 {(distinct s i)} || {(= s i)};
 {(= (select a i) tmp)} || {(= s i)};
 {exist _i0 in [0,1,100000),(= (select a _i0) tmp)} || {(= s i)};
 {exist _i0 in [0,1,k),(= (select a _i0) tmp)} || {(= s i)};
 
----------[B16]-> [B15] out -------:
(< s 100000);
 (< i 100000);
 (< s k);
 (< i k);
 (>= k 100000);
 (< x 100000);
 (< x k);
 (< x i);
 (= y (+ x 1));
 {(distinct s i)} || {(= s i)};
 {(= (select a i) tmp)} || {(= s i)};
 {exist _i0 in [0,1,100000),(= (select a _i0) tmp)} || {(= s i)};
 {exist _i0 in [0,1,k),(= (select a _i0) tmp)} || {(= s i)};
 
--------[B17] in ::--------
(< s 100000);
 (< i 100000);
 (< s k);
 (< i k);
 (>= k 100000);
 {(>= y i)} || {(= x 0)};
 {(distinct s i)} || {(= s i)};
 {(= (select a i) tmp)} || {(= s i)};
 {exist _i0 in [0,1,100000),(= (select a _i0) tmp)} || {(= s i)};
 {exist _i0 in [0,1,k),(= (select a _i0) tmp)} || {(= s i)};
 
----------[B17]-> [B16] out -------:
(< s 100000);
 (< i 100000);
 (< s k);
 (< i k);
 (>= k 100000);
 (< x 100000);
 (< x k);
 (< x i);
 {(>= y i)} || {(= x 0)};
 {(distinct s i)} || {(= s i)};
 {(= (select a i) tmp)} || {(= s i)};
 {exist _i0 in [0,1,100000),(= (select a _i0) tmp)} || {(= s i)};
 {exist _i0 in [0,1,k),(= (select a _i0) tmp)} || {(= s i)};
 
----------[B17]-> [B12] out -------:
(< s 100000);
 (< i 100000);
 (< s k);
 (< i k);
 (>= k 100000);
 (>= x i);
 {(>= y i)} || {(= x 0)};
 {(distinct s i)} || {(= s i)};
 {(= (select a i) tmp)} || {(= s i)};
 {exist _i0 in [0,1,100000),(= (select a _i0) tmp)} || {(= s i)};
 {exist _i0 in [0,1,k),(= (select a _i0) tmp)} || {(= s i)};
 
--------[B18] in ::--------
(< s 100000);
 (< i 100000);
 (< s k);
 (< i k);
 (>= k 100000);
 {(distinct s i)} || {(= s i)};
 {(= (select a i) tmp)} || {(= s i)};
 {exist _i0 in [0,1,100000),(= (select a _i0) tmp)} || {(= s i)};
 {exist _i0 in [0,1,k),(= (select a _i0) tmp)} || {(= s i)};
 {(>= x 100000)} || {(= i 0)};
 
----------[B18]-> [B17] out -------:
(< s 100000);
 (< i 100000);
 (< s k);
 (< i k);
 (>= k 100000);
 (= x 0);
 {(distinct s i)} || {(= s i)};
 {(= (select a i) tmp)} || {(= s i)};
 {exist _i0 in [0,1,100000),(= (select a _i0) tmp)} || {(= s i)};
 {exist _i0 in [0,1,k),(= (select a _i0) tmp)} || {(= s i)};
 
--------[B19] in ::--------
(< s 100000);
 (< i 100000);
 (< s k);
 (< i k);
 (>= k 100000);
 (distinct s i);
 {(>= x 100000)} || {(= i 0)};
 
----------[B19]-> [B18] out -------:
(< s 100000);
 (< i 100000);
 (< s k);
 (< i k);
 (>= k 100000);
 (distinct s i);
 (= (select a i) tmp);
 exist _i0 in [0,1,100000),(= (select a _i0) tmp);
 exist _i0 in [0,1,k),(= (select a _i0) tmp);
 {(>= x 100000)} || {(= i 0)};
 
--------[B20] in ::--------
(< s 100000);
 (< i 100000);
 (< s k);
 (< i k);
 (>= k 100000);
 {(>= x 100000)} || {(= i 0)};
 
----------[B20]-> [B19] out -------:
(< s 100000);
 (< i 100000);
 (< s k);
 (< i k);
 (>= k 100000);
 (distinct s i);
 {(>= x 100000)} || {(= i 0)};
 
----------[B20]-> [B18] out -------:
(< s 100000);
 (< i 100000);
 (< s k);
 (< i k);
 (>= k 100000);
 (= s i);
 {(>= x 100000)} || {(= i 0)};
 
--------[B21] in ::--------
(< s 100000);
 (< i 100000);
 {(>= x 100000)} || {(= i 0)};
 
----------[B21]-> [B25] out -------:
(< s 100000);
 (< i 100000);
 {(>= x 100000)} || {(= i 0)};
 
--------[B22] in ::--------
(< s 100000);
 (< k 100000);
 (< i 100000);
 {(= s k)} || {(>= (select a k) (select a s))};
 {(= s k)} || {exist _i0 in [(+ i 1),1,100000),(>= (select a _i0) (select a s))};
 {(>= x 100000)} || {(= i 0)};
 
----------[B22]-> [B21] out -------:
(< s 100000);
 (< i 100000);
 {(>= x 100000)} || {(= i 0)};
 
--------[B23] in ::--------
(< s 100000);
 (< i 100000);
 (< k 100000);
 (< (select a k) (select a s));
 {(>= x 100000)} || {(= i 0)};
 exist _i0 in [(+ i 1),1,100000),(< (select a _i0) (select a s));
 
----------[B23]-> [B22] out -------:
(< s 100000);
 (< k 100000);
 (< i 100000);
 (= s k);
 {(>= x 100000)} || {(= i 0)};
 
--------[B24] in ::--------
(< s 100000);
 (< i 100000);
 (< k 100000);
 {(>= x 100000)} || {(= i 0)};
 
----------[B24]-> [B23] out -------:
(< s 100000);
 (< i 100000);
 (< k 100000);
 (< (select a k) (select a s));
 {(>= x 100000)} || {(= i 0)};
 exist _i0 in [(+ i 1),1,100000),(< (select a _i0) (select a s));
 
----------[B24]-> [B22] out -------:
(< s 100000);
 (< i 100000);
 (< k 100000);
 (>= (select a k) (select a s));
 {(>= x 100000)} || {(= i 0)};
 exist _i0 in [(+ i 1),1,100000),(>= (select a _i0) (select a s));
 
--------[B25] in ::--------
(< s 100000);
 (< i 100000);
 {(>= x 100000)} || {(= i 0)};
 
----------[B25]-> [B24] out -------:
(< s 100000);
 (< i 100000);
 (< k 100000);
 {(>= x 100000)} || {(= i 0)};
 
----------[B25]-> [B20] out -------:
(< s 100000);
 (< i 100000);
 (< s k);
 (< i k);
 (>= k 100000);
 {(>= x 100000)} || {(= i 0)};
 
--------[B26] in ::--------
(< i 100000);
 {(< s 100000)} || {(= i 0)};
 {(< s k)} || {(= i 0)};
 {(>= k 100000)} || {(= i 0)};
 {(< s x)} || {(= i 0)};
 {(>= x 100000)} || {(= i 0)};
 
----------[B26]-> [B25] out -------:
(< s 100000);
 (< i 100000);
 (= k (+ i 1));
 (= s i);
 {(>= x 100000)} || {(= i 0)};
 
--------[B27] in ::--------
{(< s 100000)} || {(= i 0)};
 {(< s k)} || {(= i 0)};
 {(>= k 100000)} || {(= i 0)};
 {(< s x)} || {(= i 0)};
 {(>= x 100000)} || {(= i 0)};
 
----------[B27]-> [B26] out -------:
(< i 100000);
 {(< s 100000)} || {(= i 0)};
 {(< s k)} || {(= i 0)};
 {(>= k 100000)} || {(= i 0)};
 {(< s x)} || {(= i 0)};
 {(>= x 100000)} || {(= i 0)};
 
----------[B27]-> [B7] out -------:
(< s 100000);
 (< s k);
 (>= k 100000);
 (< s x);
 (>= x 100000);
 (< s i);
 (>= i 100000);
 
--------[B28] in ::--------

----------[B28]-> [B27] out -------:
(= i 0);
 
--------[B29] in ::--------

----------[B29]-> [B28] out -------:

