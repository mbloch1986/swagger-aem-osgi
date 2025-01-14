# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"name",
    :"title",
    :"details",
    :"enabled",
    :"serviceName",
    :"log.level",
    :"queue.processing.enabled",
    :"packageExporter.target",
    :"packageImporter.target",
    :"requestAuthorizationStrategy.target",
    :"triggers.target"
  ]

  @type t :: %__MODULE__{
    :"name" => ConfigNodePropertyString,
    :"title" => ConfigNodePropertyString,
    :"details" => ConfigNodePropertyString,
    :"enabled" => ConfigNodePropertyBoolean,
    :"serviceName" => ConfigNodePropertyString,
    :"log.level" => ConfigNodePropertyDropDown,
    :"queue.processing.enabled" => ConfigNodePropertyBoolean,
    :"packageExporter.target" => ConfigNodePropertyString,
    :"packageImporter.target" => ConfigNodePropertyString,
    :"requestAuthorizationStrategy.target" => ConfigNodePropertyString,
    :"triggers.target" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"name", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"title", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"details", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"enabled", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"serviceName", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"log.level", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyDropDown, options)
    |> deserialize(:"queue.processing.enabled", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"packageExporter.target", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"packageImporter.target", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"requestAuthorizationStrategy.target", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"triggers.target", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end

