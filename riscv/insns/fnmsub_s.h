require_either_extension('F', EXT_ZFINX);
require_fp;
p->fpu.rounding_mode = (FloppyFloat::RoundingMode) RM;
float result;
FLOPPY_FLOAT_FUNC_2(result, p->fpu.rounding_mode, p->fpu.Fma, float, -bc<float>(FRS1_F), bc<float>(FRS2_F), bc<float>(FRS3_F))
WRITE_FRD_F(bc<float32_t>(result));
set_fp_exceptions_ff
