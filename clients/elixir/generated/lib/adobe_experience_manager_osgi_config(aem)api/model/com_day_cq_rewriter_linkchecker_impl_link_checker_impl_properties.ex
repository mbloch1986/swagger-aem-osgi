# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"scheduler.period",
    :"scheduler.concurrent",
    :"service.bad_link_tolerance_interval",
    :"service.check_override_patterns",
    :"service.cache_broken_internal_links",
    :"service.special_link_prefix",
    :"service.special_link_patterns"
  ]

  @type t :: %__MODULE__{
    :"scheduler.period" => ConfigNodePropertyInteger,
    :"scheduler.concurrent" => ConfigNodePropertyBoolean,
    :"service.bad_link_tolerance_interval" => ConfigNodePropertyInteger,
    :"service.check_override_patterns" => ConfigNodePropertyArray,
    :"service.cache_broken_internal_links" => ConfigNodePropertyBoolean,
    :"service.special_link_prefix" => ConfigNodePropertyArray,
    :"service.special_link_patterns" => ConfigNodePropertyArray
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"scheduler.period", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"scheduler.concurrent", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"service.bad_link_tolerance_interval", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"service.check_override_patterns", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"service.cache_broken_internal_links", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"service.special_link_prefix", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"service.special_link_patterns", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
  end
end

