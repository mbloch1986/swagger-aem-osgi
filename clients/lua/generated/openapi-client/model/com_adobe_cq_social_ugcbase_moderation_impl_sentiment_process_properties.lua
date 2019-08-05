--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_adobe_cq_social_ugcbase_moderation_impl_sentiment_process_properties class
local com_adobe_cq_social_ugcbase_moderation_impl_sentiment_process_properties = {}
local com_adobe_cq_social_ugcbase_moderation_impl_sentiment_process_properties_mt = {
	__name = "com_adobe_cq_social_ugcbase_moderation_impl_sentiment_process_properties";
	__index = com_adobe_cq_social_ugcbase_moderation_impl_sentiment_process_properties;
}

local function cast_com_adobe_cq_social_ugcbase_moderation_impl_sentiment_process_properties(t)
	return setmetatable(t, com_adobe_cq_social_ugcbase_moderation_impl_sentiment_process_properties_mt)
end

local function new_com_adobe_cq_social_ugcbase_moderation_impl_sentiment_process_properties(watchwords_positive, watchwords_negative, watchwords_path, sentiment_path)
	return cast_com_adobe_cq_social_ugcbase_moderation_impl_sentiment_process_properties({
		["watchwords.positive"] = watchwords_positive;
		["watchwords.negative"] = watchwords_negative;
		["watchwords.path"] = watchwords_path;
		["sentiment.path"] = sentiment_path;
	})
end

return {
	cast = cast_com_adobe_cq_social_ugcbase_moderation_impl_sentiment_process_properties;
	new = new_com_adobe_cq_social_ugcbase_moderation_impl_sentiment_process_properties;
}