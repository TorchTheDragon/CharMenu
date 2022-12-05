// Generated by Haxe 4.1.5
#ifndef INCLUDED_hscript_Error
#define INCLUDED_hscript_Error

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscript,Error)
HX_DECLARE_CLASS1(hscript,ErrorDef)

namespace hscript{


class HXCPP_CLASS_ATTRIBUTES Error_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Error_obj OBJ_;
		Error_obj();

	public:
		enum { _hx_ClassId = 0x2248dc5d };

		void __construct( ::hscript::ErrorDef e,int pmin,int pmax,::String origin,int line);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hscript.Error")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hscript.Error"); }
		static ::hx::ObjectPtr< Error_obj > __new( ::hscript::ErrorDef e,int pmin,int pmax,::String origin,int line);
		static ::hx::ObjectPtr< Error_obj > __alloc(::hx::Ctx *_hx_ctx, ::hscript::ErrorDef e,int pmin,int pmax,::String origin,int line);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Error_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Error",a8,3b,57,06); }

		 ::hscript::ErrorDef e;
		int pmin;
		int pmax;
		::String origin;
		int line;
		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace hscript

#endif /* INCLUDED_hscript_Error */ 
