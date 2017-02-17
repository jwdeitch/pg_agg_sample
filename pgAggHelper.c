#include "postgres.h"
#include "fmgr.h"
#include "utils/builtins.h"

PG_MODULE_MAGIC;

/*
 Some of this content was taken from
 the postgres documention, speicifically:
 36.9.10. Polymorphic Arguments and Return Types
*/


/* Carry along the first datum in a set
   when used in aggregation 
*/
PG_FUNCTION_INFO_V1(base36_encode);
Datum first(PG_FUNCTION_ARGS)
{
  
  ArrayType   *result;
  Oid         element_type = get_fn_expr_argtype(fcinfo->flinfo, 0);
  Datum       element;
  bool        isnull;
  int16       typlen;
  bool        typbyval;
  char        typalign;
  
  if (!OidIsValid(element_type))
    elog(ERROR, "could not determine data type of input");
  
  /* get the provided element, being careful in case it's NULL */
  isnull = PG_ARGISNULL(0);
  if (isnull)
    element = (Datum) 0;
  else
    element = PG_GETARG_DATUM(0);


  elog(DEBUG, element_type);

  
  
  
}
