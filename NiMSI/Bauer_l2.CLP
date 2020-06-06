(deffacts startup
 (ojciec Adam Kain)
 (ojciec Adam Abel)
 (ojciec Adam Set)
 (ojciec Adam Alabama)
 (ojciec Kain Jan)
 (ojciec Kain Maria)
 (matka Alabama Jan)
 (matka Alabama Maria)
 (matka Ewa Kain)
 (matka Ewa Abel)
 (matka Ewa Set)
 (matka Ewa Alabama)
 (m Adam)
 (m Abel)
 (m Kain)
 (m Set)
 (m Jan)
 (f Maria)
 (f Ewa)
 (f Alabama)

)

(defrule MAIN::syn
  	(or	(ojciec ?x ?y)
		(matka ?x ?y)
	)
	(m ?y)
	=>
	(assert(syn ?y ?x))
	(printout t ?y " jest synem " ?x crlf)
)

(defrule MAIN::corka
	(or	(ojciec ?x ?y)
		(matka ?x ?y)
	)
	(f ?y)
	=>
	(assert(corka ?y ?x))
	(printout t ?y " jest corka " ?x crlf)
)

(defrule MAIN::dziadek
	(or	(ojciec ?x ?y)
		(matka ?x ?y)
	)
	(ojciec ?z ?x)
	(m ?z)
	=>
	(assert(dziadek ?z ?y))
	(printout t ?z " jest dziadkiem " ?y crlf)
)

(defrule MAIN::babcia
	(or	(ojciec ?x ?y)
		(matka ?x ?y)
	)
	(matka ?z ?x)
	(f ?z)
	=>
	(assert(babcia ?z ?y))
	(printout t ?z " jest babcia " ?y crlf)
)

(defrule MAIN::wnuczek
	(or	(ojciec ?x ?y)
		(matka ?x ?y)
	)
	(or	(ojciec ?y ?z)
		(matka ?y ?z)
	)
	(m ?z)
	=>
	(assert(wnuczek ?z ?x))
	(printout t ?z " jest wnuczkiem " ?x crlf)
)

(defrule MAIN::wnuczka
	(or	(ojciec ?x ?y)
		(matka ?x ?y)
	)
	(or	(ojciec ?y ?z)
		(matka ?y ?z)
	)
	(f ?z)
	=>
	(assert(wnuczek ?z ?x))
	(printout t ?z " jest wnuczka " ?x crlf)
)

(defrule MAIN::brat
	(and
		(or
			(m ?x)
			(f ?x)
		)
		(m ?y)
		(or
			(m ?z)
			(f ?z)
		)
		(ojciec ?x ?y)
		(ojciec ?x ?z)
	)
	=>
	(if	(neq ?y ?z)
		then
		(assert(brat ?y ?z))
		(printout t ?y " jest bratem " ?z crlf)
	)
)

(defrule MAIN::siostra
	(and
		(or
			(m ?x)
			(f ?x)
		)
		(f ?y)
		(or
			(m ?z)
			(f ?z)
		)
		(ojciec ?x ?y)
		(ojciec ?x ?z)
	)
	=>
	(if	(neq ?y ?z)
		then
		(assert(siostra ?y ?z))
		(printout t ?y " jest siostra " ?z crlf)
	)
)

(defrule MAIN::przodek
	(or
		(or
			(ojciec ?z ?x)
			(matka ?z ?x)
		)
		(and
			(or
				(ojciec ?y ?x)
				(matka ?y ?x)
			)
			(or
				(ojciec ?z ?y)
				(matka ?z ?y)
			)
		)
	)
    	=>
    	(assert(przodek ?z ?x))
    	(printout t ?z " jest przodkiem " ?x crlf)
)

(defrule MAIN::potomek
	(or
		(or
			(ojciec ?z ?x)
			(matka ?z ?x)
		)
		(and
			(or
				(ojciec ?z ?y)
				(matka ?z ?y)
			)
			(or
				(ojciec ?y ?x)
				(matka ?y ?x)
			)
		)
	)
	=>
	(assert(potomek ?x ?z))
	(printout t ?x " jest potomkiem " ?z crlf)
)