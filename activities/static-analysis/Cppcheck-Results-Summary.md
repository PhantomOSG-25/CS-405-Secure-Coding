# Cppcheck Static Analysis Results

Cppcheck version **2.21.0**. The saved XML report contained **32 messages**: 3 errors, 7 warnings, 17 style findings, and 5 informational messages.

| Severity | ID | Line | Message |
|---|---|---:|---|
| information | `missingIncludeSystem` | 4 | Include file: &lt;cassert&gt; not found. Please note: Standard library headers do not need to be provided to get proper results. |
| information | `missingIncludeSystem` | 5 | Include file: &lt;iostream&gt; not found. Please note: Standard library headers do not need to be provided to get proper results. |
| information | `missingIncludeSystem` | 6 | Include file: &lt;numeric&gt; not found. Please note: Standard library headers do not need to be provided to get proper results. |
| information | `missingIncludeSystem` | 7 | Include file: &lt;set&gt; not found. Please note: Standard library headers do not need to be provided to get proper results. |
| information | `missingIncludeSystem` | 8 | Include file: &lt;vector&gt; not found. Please note: Standard library headers do not need to be provided to get proper results. |
| warning | `assignmentInAssert` | 127 | Assert statement modifies &#039;z&#039;. |
| warning | `assertWithSideEffect` | 129 | Assert statement calls a function which may have desired side effects: &#039;my_function&#039;. |
| warning | `uselessAssignmentPtrArg` | 109 | Assignment of function parameter has no effect outside the function. Did you forget dereferencing it? |
| error | `autoVariables` | 59 | Address of local auto-variable assigned to a function parameter. |
| warning | `compareBoolExpressionWithInt` | 129 | Comparison of a boolean expression with an integer other than 0 or 1. |
| style | `returnNonBoolInBooleanFunction` | 98 | Non-boolean value returned from function returning bool |
| warning | `arrayIndexOutOfBoundsCond` | 66 | Either the condition &#039;count==1000&#039; is redundant or the array &#039;buf[10]&#039; is accessed at index 1000, which is out of bounds. |
| warning | `uninitMemberVarPrivate` | 42 | Member variable &#039;A::x&#039; is not initialized in the copy constructor. |
| style | `functionStatic` | 50 | The member function &#039;MySpecialType::DontThrow&#039; can be static. |
| style | `functionStatic` | 103 | The member function &#039;Token::next&#039; can be static. |
| style | `compareValueOutOfTypeRangeError` | 129 | Comparing expression of type &#039;bool&#039; against value 3. Condition is always false. |
| error | `throwInNoexceptFunction` | 52 | Unhandled exception thrown in function declared not to throw exceptions. |
| warning | `nullPointerRedundantCheck` | 109 | Either the condition &#039;tok&#039; is redundant or there is possible null pointer dereference: tok. |
| style | `variableScope` | 64 | The scope of the variable &#039;buf&#039; can be reduced. |
| style | `shadowVariable` | 56 | Argument &#039;a&#039; shadows outer variable |
| style | `shadowVariable` | 133 | Local variable &#039;x&#039; shadows outer variable |
| style | `shadowVariable` | 134 | Local variable &#039;y&#039; shadows outer variable |
| style | `shadowVariable` | 135 | Local variable &#039;z&#039; shadows outer variable |
| error | `invalidContainer` | 87 | Using iterator to local container &#039;items&#039; that may be invalid. |
| style | `unusedStructMember` | 41 | class member &#039;A::x&#039; is never used. |
| style | `unreadVariable` | 66 | Variable &#039;buf[count]&#039; is assigned a value that is never used. |
| style | `unreadVariable` | 109 | Variable &#039;tok&#039; is assigned a value that is never used. |
| style | `unreadVariable` | 117 | Variable &#039;x&#039; is assigned a value that is never used. |
| style | `unreadVariable` | 118 | Variable &#039;y&#039; is assigned a value that is never used. |
| style | `unusedFunction` | 50 | The function &#039;DontThrow&#039; is never used. |
| style | `unusedFunction` | 69 | The function &#039;do_something_useless&#039; is never used. |
| style | `unusedFunction` | 31 | The function &#039;is_type&#039; is never used. |
