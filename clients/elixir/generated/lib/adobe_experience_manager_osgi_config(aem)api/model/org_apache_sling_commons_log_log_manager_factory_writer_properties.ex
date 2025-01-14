# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingCommonsLogLogManagerFactoryWriterProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"org.apache.sling.commons.log.file",
    :"org.apache.sling.commons.log.file.number",
    :"org.apache.sling.commons.log.file.size",
    :"org.apache.sling.commons.log.file.buffered"
  ]

  @type t :: %__MODULE__{
    :"org.apache.sling.commons.log.file" => ConfigNodePropertyString,
    :"org.apache.sling.commons.log.file.number" => ConfigNodePropertyInteger,
    :"org.apache.sling.commons.log.file.size" => ConfigNodePropertyString,
    :"org.apache.sling.commons.log.file.buffered" => ConfigNodePropertyBoolean
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingCommonsLogLogManagerFactoryWriterProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"org.apache.sling.commons.log.file", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"org.apache.sling.commons.log.file.number", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"org.apache.sling.commons.log.file.size", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"org.apache.sling.commons.log.file.buffered", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
  end
end

