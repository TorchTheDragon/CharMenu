// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_KeyEventInfo
#include <lime/_internal/backend/native/KeyEventInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cef4a471e9b9c478_760_new,"lime._internal.backend.native.KeyEventInfo","new",0x84b8978d,"lime._internal.backend.native.KeyEventInfo.new","lime/_internal/backend/native/NativeApplication.hx",760,0xc1eba895)
HX_LOCAL_STACK_FRAME(_hx_pos_cef4a471e9b9c478_769_clone,"lime._internal.backend.native.KeyEventInfo","clone",0x44e9bfca,"lime._internal.backend.native.KeyEventInfo.clone","lime/_internal/backend/native/NativeApplication.hx",769,0xc1eba895)
namespace lime{
namespace _internal{
namespace backend{
namespace native{

void KeyEventInfo_obj::__construct( ::Dynamic type,::hx::Null< int >  __o_windowID,::hx::Null< Float >  __o_keyCode,::hx::Null< int >  __o_modifier){
            		int windowID = __o_windowID.Default(0);
            		Float keyCode = __o_keyCode.Default(0);
            		int modifier = __o_modifier.Default(0);
            	HX_STACKFRAME(&_hx_pos_cef4a471e9b9c478_760_new)
HXLINE( 761)		this->type = ( (int)(type) );
HXLINE( 762)		this->windowID = windowID;
HXLINE( 763)		this->keyCode = keyCode;
HXLINE( 764)		this->modifier = modifier;
            	}

Dynamic KeyEventInfo_obj::__CreateEmpty() { return new KeyEventInfo_obj; }

void *KeyEventInfo_obj::_hx_vtable = 0;

Dynamic KeyEventInfo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< KeyEventInfo_obj > _hx_result = new KeyEventInfo_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool KeyEventInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0253d569;
}

 ::lime::_internal::backend::native::KeyEventInfo KeyEventInfo_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_cef4a471e9b9c478_769_clone)
HXDLIN( 769)		return  ::lime::_internal::backend::native::KeyEventInfo_obj::__alloc( HX_CTX ,this->type,this->windowID,this->keyCode,this->modifier);
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyEventInfo_obj,clone,return )


KeyEventInfo_obj::KeyEventInfo_obj()
{
}

::hx::Val KeyEventInfo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { return ::hx::Val( keyCode ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modifier") ) { return ::hx::Val( modifier ); }
		if (HX_FIELD_EQ(inName,"windowID") ) { return ::hx::Val( windowID ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val KeyEventInfo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { keyCode=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modifier") ) { modifier=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windowID") ) { windowID=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("keyCode",6c,22,9e,9b));
	outFields->push(HX_("modifier",57,db,c7,16));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("windowID",cb,af,cd,7d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo KeyEventInfo_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(KeyEventInfo_obj,keyCode),HX_("keyCode",6c,22,9e,9b)},
	{::hx::fsInt,(int)offsetof(KeyEventInfo_obj,modifier),HX_("modifier",57,db,c7,16)},
	{::hx::fsInt,(int)offsetof(KeyEventInfo_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsInt,(int)offsetof(KeyEventInfo_obj,windowID),HX_("windowID",cb,af,cd,7d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *KeyEventInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String KeyEventInfo_obj_sMemberFields[] = {
	HX_("keyCode",6c,22,9e,9b),
	HX_("modifier",57,db,c7,16),
	HX_("type",ba,f2,08,4d),
	HX_("windowID",cb,af,cd,7d),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class KeyEventInfo_obj::__mClass;

void KeyEventInfo_obj::__register()
{
	KeyEventInfo_obj _hx_dummy;
	KeyEventInfo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.backend.native.KeyEventInfo",1b,cd,40,15);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(KeyEventInfo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< KeyEventInfo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = KeyEventInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = KeyEventInfo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native
