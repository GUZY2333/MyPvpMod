#include <ll/api/event/EventBus.h>
#include <ll/api/event/client/RenderEvent.h>
#include <ll/api/log/Logger.h>

using namespace ll::event;

void onRender(RenderEvent& event) {
    ll::log::Logger::getInstance().info("PVP优化模组：渲染拦截已挂载");
}

extern "C" void mod_init() {
    ll::log::Logger::getInstance().info("PVP优化模组加载成功！");
    EventBus::getInstance().emplaceListener<RenderEvent>(onRender);
}
