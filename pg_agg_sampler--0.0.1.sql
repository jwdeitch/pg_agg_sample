CREATE FUNCTION find(void) RETURNS void
AS '$libdir/pg_agg_sampler'
LANGUAGE C IMMUTABLE STRICT;