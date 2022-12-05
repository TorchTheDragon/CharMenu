// Generated by Haxe 4.1.5
#ifndef INCLUDED_lime_math_Matrix3
#define INCLUDED_lime_math_Matrix3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,math,Matrix3)
HX_DECLARE_CLASS2(lime,math,Rectangle)
HX_DECLARE_CLASS2(lime,math,Vector2)
HX_DECLARE_CLASS2(lime,math,Vector4)

namespace lime{
namespace math{


class HXCPP_CLASS_ATTRIBUTES Matrix3_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Matrix3_obj OBJ_;
		Matrix3_obj();

	public:
		enum { _hx_ClassId = 0x43302551 };

		void __construct(::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.math.Matrix3")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.math.Matrix3"); }
		static ::hx::ObjectPtr< Matrix3_obj > __new(::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty);
		static ::hx::ObjectPtr< Matrix3_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Matrix3_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Matrix3",b2,6a,b8,60); }

		static void __boot();
		static  ::lime::math::Matrix3 _hx___identity;
		Float a;
		Float b;
		Float c;
		Float d;
		Float tx;
		Float ty;
		 ::lime::math::Matrix3 clone();
		::Dynamic clone_dyn();

		void concat( ::lime::math::Matrix3 m);
		::Dynamic concat_dyn();

		void copyColumnFrom(int column, ::lime::math::Vector4 vector4);
		::Dynamic copyColumnFrom_dyn();

		void copyColumnTo(int column, ::lime::math::Vector4 vector4);
		::Dynamic copyColumnTo_dyn();

		void copyFrom( ::lime::math::Matrix3 sourceMatrix3);
		::Dynamic copyFrom_dyn();

		void copyRowFrom(int row, ::lime::math::Vector4 vector4);
		::Dynamic copyRowFrom_dyn();

		void copyRowTo(int row, ::lime::math::Vector4 vector4);
		::Dynamic copyRowTo_dyn();

		void createBox(Float scaleX,Float scaleY,::hx::Null< Float >  rotation,::hx::Null< Float >  tx,::hx::Null< Float >  ty);
		::Dynamic createBox_dyn();

		void createGradientBox(Float width,Float height,::hx::Null< Float >  rotation,::hx::Null< Float >  tx,::hx::Null< Float >  ty);
		::Dynamic createGradientBox_dyn();

		bool equals( ::lime::math::Matrix3 matrix3);
		::Dynamic equals_dyn();

		 ::lime::math::Vector2 deltaTransformVector( ::lime::math::Vector2 Vector2, ::lime::math::Vector2 result);
		::Dynamic deltaTransformVector_dyn();

		void identity();
		::Dynamic identity_dyn();

		 ::lime::math::Matrix3 invert();
		::Dynamic invert_dyn();

		void rotate(Float theta);
		::Dynamic rotate_dyn();

		void scale(Float sx,Float sy);
		::Dynamic scale_dyn();

		void setRotation(Float theta,::hx::Null< Float >  scale);
		::Dynamic setRotation_dyn();

		void setTo(Float a,Float b,Float c,Float d,Float tx,Float ty);
		::Dynamic setTo_dyn();

		::String to3DString(::hx::Null< bool >  roundPixels);
		::Dynamic to3DString_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::lime::math::Rectangle transformRect( ::lime::math::Rectangle rect, ::lime::math::Rectangle result);
		::Dynamic transformRect_dyn();

		 ::lime::math::Vector2 transformVector( ::lime::math::Vector2 pos, ::lime::math::Vector2 result);
		::Dynamic transformVector_dyn();

		void translate(Float dx,Float dy);
		::Dynamic translate_dyn();

};

} // end namespace lime
} // end namespace math

#endif /* INCLUDED_lime_math_Matrix3 */ 
