Monday, October 5, 2026
# Week 01 — Propositional Logic
# Source: Daniel J. Velleman, How to Prove It
Proposition: a statement that can be either true or false. Propositional logic (also called sentential logic) is a branch of formal logic that deals with propositions and the logical relationships between them, using connectives.

## 1. Learning Objectives
Understand the differences in wordings and phrases to capture the correct meaning.

## 2. Propositions and Logical Forms
A proposition is a declarative statement that has exactly one truth value: True (T) or False (F).
Propositions are usually represented by letters such as p, q, and r.
A logical form represents the structure of a statement using propositional variables and logical connectives.

## 3. Logical Connectives
### Negation (NOT)
If p is a proposition, then the negation of p is denoted by ¬p, which, when translated to simple English, means "It is not the case that p" or simply "not p." The truth value of ¬p is the opposite of the truth value of p.
### Conjunction (AND)
For any two propositions p and q, their conjunction is denoted by p ∧ q, which means "p and q." The conjunction p∧q is True when both p and q are True, otherwise False.
### Disjunction (INCLUSIVE OR)
For any two propositions p and q, their disjunction is denoted by p ∨ q, which means "p or q." The disjunction p ∨ q is True when either p or q is True including when both are True, otherwise False.
### Exclusive Or (XOR)
For any two propositions p and q, their exclusive or is denoted by p ⊕ q, which means "either p or q but not both." The exclusive or p⊕q is True when either p or q is True, and False when both are true or both are false. 
### Conditional (IF...THEN)
For any two propositions, p and q, the statement "if p then q" is called an implication, and it is denoted by p → q. In the implication p → q, p is called the hypothesis or antecedent or premise, and q is called the conclusion or consequence. The implication is that p → q is also called a conditional statement. The implication is false when p is true and q is false; otherwise, it is true. 
### Biconditional (IF AND ONLY IF)
For any two propositions p and q, the statement "p if and only if (iff) q" is called a biconditional, and it is denoted by p ↔ q. p ↔ q has the same truth value as (p → q) ∧ (q → p). The biconditional is true when p and q have the same truth values and is false otherwise.

## 4. Translating English into Symbolic Logic
### Neither...Nor
Neither p nor q means that both propositions are false.
¬p ∧ ¬q ≡ ¬(p ∨ q)
### Either...Or
Either p or q is normally represented by p ∨ q in propositional logic, unless the wording explicitly excludes both being true.
Inclusive OR: p ∨ q.
Exclusive OR: (p ∨ q) ∧ ¬(p ∧ q).
### Not Both
Not both p and q means that at least one proposition is false.
¬(p ∧ q) ≡ ¬p ∨ ¬q
Important distinction:
Not both: ¬(p ∧ q).
Both not: ¬p ∧ ¬q.
### Necessary vs. Sufficient Conditions
Necessary = required for something.
If p is necessary for q, then q → p.
Sufficient = enough to guarantee something.
If p is sufficient for q, then p → q.

## 5. Truth Tables
A truth table shows the truth value of a logical expression for every possible combination of its propositional variables.
For n distinct variables, there are 2ⁿ possible combinations.

## 6. Logical Equivalences
### De Morgan's Laws
¬(p ∧ q) is equivalent to ¬p ∨ ¬q.
¬(p ∨ q) is equivalent to ¬p ∧ ¬q.
### Commutative Laws
p ∧ q is equivalent to q ∧ p.
p ∨ q is equivalent to q ∨ p. 
### Associative Laws
p ∧ (q ∧ r) is equivalent to (p ∧ q) ∧ r.
p ∨ (q ∨ r) is equivalent to (p ∨ q) ∨ r.
### Idempotent Laws
p ∧ p is equivalent to p.
p ∨ p is equivalent to p.
### Distributive Laws
p ∧ (q ∨ r) is equivalent to (p ∧ q) ∨ (p ∧ r).
p ∨ (q ∧ r) is equivalent to (p ∨ q) ∧ (p ∨ r).
### Absorption Laws
p ∧ (p ∨ q) is equivalent to p.
p ∨ (p ∧ q) is equivalent to p.
### Double Negation Laws
¬¬p is equivalent to p.

## 7. Tautologies and Contradictions
Formulas that are always true are called tautologies (ex: p ∨ ¬p). Similarly, formulas that are always false are called contradictions (ex: p ∧ ¬p).

## 8. Arguments and Logical Validity
### Premises and Conclusions
An argument consists of premises and a conclusion.
Premises are statements presented as reasons or evidence.
The conclusion is the statement that the argument claims follows from those premises.
### Valid vs. Invalid Arguments
An argument is valid if it is impossible for all its premises to be true while its conclusion is false.
An argument is invalid if at least one truth-table row has all premises true and the conclusion false.
Important: Validity concerns the logical relationship between the premises and conclusion, not whether the premises are actually true.

## 9. Practice Exercises Completed
- Translating English statements into propositional logic.
- Identifying differences between "not both" and "both not."
- Translating statements involving neither...nor and either...or.
- Applying De Morgan's Laws.
- Constructing and interpreting truth tables.
- Evaluating conditional statements.
- Distinguishing necessary and sufficient conditions.
- Determining whether arguments are valid or invalid.
- Working with sets, intersections, unions, differences, and symmetric differences.

## 10. Mistakes and Difficult Concepts
- Initially found it difficult to understand why F → F is true.
Key clarification: A conditional is false only when its antecedent is true and its consequent is false.
- Small differences in wording can produce different logical forms.
- Necessary vs. sufficient conditions reverse the direction of implication.
- Understanding set operations with numerical examples was easier than interpreting and manipulating symbolic expressions.
Area for improvement: Practice reading expressions from the innermost parentheses outward.

## 11. Key Takeaways
- Logical structure matters more than the everyday wording of a statement.
- Negation placement can completely change a statement's meaning.
- OR is inclusive unless otherwise specified.
- De Morgan's Laws transform negated conjunctions and disjunctions.
- An implication is false only when its antecedent is true and its consequent is false.
- Sufficient and necessary conditions determine the direction of implication.
- An argument is valid when no truth-table row has true premises and a false conclusion.
- Complex expressions should be broken into smaller parts before evaluation.

## 12. Topics to Review Next Week
- Deductive Reasoning and Logical Connectives
- Truth Tables
- Variables and Sets
- Operations on Sets
- The Conditional and Biconditional Connectives