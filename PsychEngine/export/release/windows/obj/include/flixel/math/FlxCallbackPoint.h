// Generated by Haxe 4.1.5
#ifndef INCLUDED_flixel_math_FlxCallbackPoint
#define INCLUDED_flixel_math_FlxCallbackPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,math,FlxCallbackPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace math{


class HXCPP_CLASS_ATTRIBUTES FlxCallbackPoint_obj : public  ::flixel::math::FlxBasePoint_obj
{
	public:
		typedef  ::flixel::math::FlxBasePoint_obj super;
		typedef FlxCallbackPoint_obj OBJ_;
		FlxCallbackPoint_obj();

	public:
		enum { _hx_ClassId = 0x532cfc29 };

		void __construct( ::Dynamic setXCallback, ::Dynamic setYCallback, ::Dynamic setXYCallback);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.math.FlxCallbackPoint")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.math.FlxCallbackPoint"); }
		static ::hx::ObjectPtr< FlxCallbackPoint_obj > __new( ::Dynamic setXCallback, ::Dynamic setYCallback, ::Dynamic setXYCallback);
		static ::hx::ObjectPtr< FlxCallbackPoint_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic setXCallback, ::Dynamic setYCallback, ::Dynamic setXYCallback);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxCallbackPoint_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxCallbackPoint",99,08,fc,dd); }

		 ::Dynamic _setXCallback;
		Dynamic _setXCallback_dyn() { return _setXCallback;}
		 ::Dynamic _setYCallback;
		Dynamic _setYCallback_dyn() { return _setYCallback;}
		 ::Dynamic _setXYCallback;
		Dynamic _setXYCallback_dyn() { return _setXYCallback;}
		 ::flixel::math::FlxBasePoint set(::hx::Null< Float >  x,::hx::Null< Float >  y);

		Float set_x(Float value);

		Float set_y(Float value);

		void destroy();

		void put();

};

} // end namespace flixel
} // end namespace math

#endif /* INCLUDED_flixel_math_FlxCallbackPoint */ 
