require_either_extension('D', EXT_ZDINX);
require_fp;
p->fpu.rounding_mode = (FloppyFloat::RoundingMode) RM;
double result;
FLOPPY_FLOAT_FUNC_2(result, p->fpu.rounding_mode, p->fpu.Div, double, bc<double>(FRS1_D), bc<double>(FRS2_D))
WRITE_FRD_D(bc<float64_t>(result));
set_fp_exceptions_ff
