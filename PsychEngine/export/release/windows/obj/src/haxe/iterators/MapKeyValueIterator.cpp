// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_iterators_MapKeyValueIterator
#include <haxe/iterators/MapKeyValueIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f71581da37158a43_35_new,"haxe.iterators.MapKeyValueIterator","new",0x902a97fd,"haxe.iterators.MapKeyValueIterator.new","C:\\ProgramData\\chocolatey\\lib\\haxe\\haxe_20201231082044_5e33a78aa\\std/haxe/iterators/MapKeyValueIterator.hx",35,0x645aacc7)
HX_LOCAL_STACK_FRAME(_hx_pos_f71581da37158a43_44_hasNext,"haxe.iterators.MapKeyValueIterator","hasNext",0x6e75ff8a,"haxe.iterators.MapKeyValueIterator.hasNext","C:\\ProgramData\\chocolatey\\lib\\haxe\\haxe_20201231082044_5e33a78aa\\std/haxe/iterators/MapKeyValueIterator.hx",44,0x645aacc7)
HX_LOCAL_STACK_FRAME(_hx_pos_f71581da37158a43_50_next,"haxe.iterators.MapKeyValueIterator","next",0x951a66b6,"haxe.iterators.MapKeyValueIterator.next","C:\\ProgramData\\chocolatey\\lib\\haxe\\haxe_20201231082044_5e33a78aa\\std/haxe/iterators/MapKeyValueIterator.hx",50,0x645aacc7)
namespace haxe{
namespace iterators{

void MapKeyValueIterator_obj::__construct(::Dynamic map){
            	HX_STACKFRAME(&_hx_pos_f71581da37158a43_35_new)
HXLINE(  36)		this->map = map;
HXLINE(  37)		this->keys = ::haxe::IMap_obj::keys(map);
            	}

Dynamic MapKeyValueIterator_obj::__CreateEmpty() { return new MapKeyValueIterator_obj; }

void *MapKeyValueIterator_obj::_hx_vtable = 0;

Dynamic MapKeyValueIterator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MapKeyValueIterator_obj > _hx_result = new MapKeyValueIterator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MapKeyValueIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5732dffd;
}

bool MapKeyValueIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_f71581da37158a43_44_hasNext)
HXDLIN(  44)		return ( (bool)(this->keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(MapKeyValueIterator_obj,hasNext,return )

 ::Dynamic MapKeyValueIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_f71581da37158a43_50_next)
HXLINE(  51)		 ::Dynamic key = this->keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE(  52)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("key",9f,89,51,00),key)
            			->setFixed(1,HX_("value",71,7f,b8,31),::haxe::IMap_obj::get(this->map,key)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MapKeyValueIterator_obj,next,return )


::hx::ObjectPtr< MapKeyValueIterator_obj > MapKeyValueIterator_obj::__new(::Dynamic map) {
	::hx::ObjectPtr< MapKeyValueIterator_obj > __this = new MapKeyValueIterator_obj();
	__this->__construct(map);
	return __this;
}

::hx::ObjectPtr< MapKeyValueIterator_obj > MapKeyValueIterator_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic map) {
	MapKeyValueIterator_obj *__this = (MapKeyValueIterator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MapKeyValueIterator_obj), true, "haxe.iterators.MapKeyValueIterator"));
	*(void **)__this = MapKeyValueIterator_obj::_hx_vtable;
	__this->__construct(map);
	return __this;
}

MapKeyValueIterator_obj::MapKeyValueIterator_obj()
{
}

void MapKeyValueIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MapKeyValueIterator);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(keys,"keys");
	HX_MARK_END_CLASS();
}

void MapKeyValueIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(keys,"keys");
}

::hx::Val MapKeyValueIterator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return ::hx::Val( map ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return ::hx::Val( keys ); }
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MapKeyValueIterator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MapKeyValueIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("map",9c,0a,53,00));
	outFields->push(HX_("keys",f4,e1,06,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MapKeyValueIterator_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(MapKeyValueIterator_obj,map),HX_("map",9c,0a,53,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MapKeyValueIterator_obj,keys),HX_("keys",f4,e1,06,47)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MapKeyValueIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String MapKeyValueIterator_obj_sMemberFields[] = {
	HX_("map",9c,0a,53,00),
	HX_("keys",f4,e1,06,47),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class MapKeyValueIterator_obj::__mClass;

void MapKeyValueIterator_obj::__register()
{
	MapKeyValueIterator_obj _hx_dummy;
	MapKeyValueIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.iterators.MapKeyValueIterator",8b,d5,ad,b4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MapKeyValueIterator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MapKeyValueIterator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MapKeyValueIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MapKeyValueIterator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace iterators
