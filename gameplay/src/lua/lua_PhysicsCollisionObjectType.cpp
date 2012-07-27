#include "Base.h"
#include "lua_PhysicsCollisionObjectType.h"

namespace gameplay
{

static const char* enumStringEmpty = "";

static const char* luaEnumString_PhysicsCollisionObjectType_RIGID_BODY = "RIGID_BODY";
static const char* luaEnumString_PhysicsCollisionObjectType_CHARACTER = "CHARACTER";
static const char* luaEnumString_PhysicsCollisionObjectType_GHOST_OBJECT = "GHOST_OBJECT";
static const char* luaEnumString_PhysicsCollisionObjectType_NONE = "NONE";

PhysicsCollisionObject::Type lua_enumFromString_PhysicsCollisionObjectType(const char* s)
{
    if (strcmp(s, luaEnumString_PhysicsCollisionObjectType_RIGID_BODY) == 0)
        return PhysicsCollisionObject::RIGID_BODY;
    if (strcmp(s, luaEnumString_PhysicsCollisionObjectType_CHARACTER) == 0)
        return PhysicsCollisionObject::CHARACTER;
    if (strcmp(s, luaEnumString_PhysicsCollisionObjectType_GHOST_OBJECT) == 0)
        return PhysicsCollisionObject::GHOST_OBJECT;
    if (strcmp(s, luaEnumString_PhysicsCollisionObjectType_NONE) == 0)
        return PhysicsCollisionObject::NONE;
    GP_ERROR("Invalid enumeration value '%s' for enumeration PhysicsCollisionObject::Type.", s);
    return PhysicsCollisionObject::RIGID_BODY;
}

const char* lua_stringFromEnum_PhysicsCollisionObjectType(PhysicsCollisionObject::Type e)
{
    if (e == PhysicsCollisionObject::RIGID_BODY)
        return luaEnumString_PhysicsCollisionObjectType_RIGID_BODY;
    if (e == PhysicsCollisionObject::CHARACTER)
        return luaEnumString_PhysicsCollisionObjectType_CHARACTER;
    if (e == PhysicsCollisionObject::GHOST_OBJECT)
        return luaEnumString_PhysicsCollisionObjectType_GHOST_OBJECT;
    if (e == PhysicsCollisionObject::NONE)
        return luaEnumString_PhysicsCollisionObjectType_NONE;
    GP_ERROR("Invalid enumeration value '%d' for enumeration PhysicsCollisionObject::Type.", e);
    return enumStringEmpty;
}

}
