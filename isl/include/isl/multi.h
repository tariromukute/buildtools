#ifndef ISL_MULTI_H
#define ISL_MULTI_H

#include <isl/space.h>
#include <isl/list.h>

#if defined(__cplusplus)
extern "C" {
#endif

#define ISL_DECLARE_MULTI(BASE)						\
unsigned isl_multi_##BASE##_dim(__isl_keep isl_multi_##BASE *multi,	\
	enum isl_dim_type type);					\
isl_ctx *isl_multi_##BASE##_get_ctx(					\
	__isl_keep isl_multi_##BASE *multi);				\
__isl_give isl_space *isl_multi_##BASE##_get_space(			\
	__isl_keep isl_multi_##BASE *multi);				\
__isl_give isl_space *isl_multi_##BASE##_get_domain_space(		\
	__isl_keep isl_multi_##BASE *multi);				\
__isl_give isl_multi_##BASE *isl_multi_##BASE##_from_##BASE##_list(	\
	__isl_take isl_space *space, __isl_take isl_##BASE##_list *list); \
__isl_give isl_multi_##BASE *isl_multi_##BASE##_zero(			\
	__isl_take isl_space *space);					\
__isl_give isl_multi_##BASE *isl_multi_##BASE##_copy(			\
	__isl_keep isl_multi_##BASE *multi);				\
void *isl_multi_##BASE##_free(__isl_take isl_multi_##BASE *multi);	\
__isl_give isl_multi_##BASE *isl_multi_##BASE##_set_dim_name(		\
	__isl_take isl_multi_##BASE *multi,				\
	enum isl_dim_type type, unsigned pos, const char *s);		\
const char *isl_multi_##BASE##_get_tuple_name(				\
	__isl_keep isl_multi_##BASE *multi, enum isl_dim_type type);	\
__isl_give isl_multi_##BASE *isl_multi_##BASE##_set_tuple_name(		\
	__isl_take isl_multi_##BASE *multi,				\
	enum isl_dim_type type, const char *s);				\
__isl_give isl_multi_##BASE *isl_multi_##BASE##_set_tuple_id(		\
	__isl_take isl_multi_##BASE *multi,				\
	enum isl_dim_type type, __isl_take isl_id *id);			\
__isl_give isl_multi_##BASE *isl_multi_##BASE##_insert_dims(		\
	__isl_take isl_multi_##BASE *multi, enum isl_dim_type type,	\
	unsigned first, unsigned n);					\
__isl_give isl_multi_##BASE *isl_multi_##BASE##_add_dims(		\
	__isl_take isl_multi_##BASE *multi, enum isl_dim_type type,	\
	unsigned n);							\
__isl_give isl_multi_##BASE *isl_multi_##BASE##_drop_dims(		\
	__isl_take isl_multi_##BASE *multi, enum isl_dim_type type,	\
	unsigned first, unsigned n);					\
__isl_give isl_##BASE *isl_multi_##BASE##_get_##BASE(			\
	__isl_keep isl_multi_##BASE *multi, int pos);			\
__isl_give isl_multi_##BASE *isl_multi_##BASE##_set_##BASE(		\
	__isl_take isl_multi_##BASE *multi, int pos,			\
	__isl_take isl_##BASE *el);					\
__isl_give isl_multi_##BASE *isl_multi_##BASE##_range_splice(		\
	__isl_take isl_multi_##BASE *multi1, unsigned pos,		\
	__isl_take isl_multi_##BASE *multi2);				\
__isl_give isl_multi_##BASE *isl_multi_##BASE##_splice(			\
	__isl_take isl_multi_##BASE *multi1, unsigned in_pos,		\
	unsigned out_pos, __isl_take isl_multi_##BASE *multi2);		\
__isl_give isl_multi_##BASE *isl_multi_##BASE##_flat_range_product(	\
	__isl_take isl_multi_##BASE *multi1,				\
	__isl_take isl_multi_##BASE *multi2);				\
__isl_give isl_multi_##BASE *isl_multi_##BASE##_range_product(		\
	__isl_take isl_multi_##BASE *multi1,				\
	__isl_take isl_multi_##BASE *multi2);				\
__isl_give isl_multi_##BASE *isl_multi_##BASE##_scale_val(		\
	__isl_take isl_multi_##BASE *multi, __isl_take isl_val *v);	\
__isl_give isl_multi_##BASE *isl_multi_##BASE##_scale_multi_val(	\
	__isl_take isl_multi_##BASE *multi,				\
	__isl_take isl_multi_val *mv);					\
__isl_give isl_multi_##BASE *isl_multi_##BASE##_align_params(		\
	__isl_take isl_multi_##BASE *multi,				\
	__isl_take isl_space *model);

#if defined(__cplusplus)
}
#endif

#endif