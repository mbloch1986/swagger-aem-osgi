# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"accountName",
    :"containerName",
    :"accessKey",
    :"rootPath",
    :"connectionURL"
  ]

  @type t :: %__MODULE__{
    :"accountName" => ConfigNodePropertyString,
    :"containerName" => ConfigNodePropertyString,
    :"accessKey" => ConfigNodePropertyString,
    :"rootPath" => ConfigNodePropertyString,
    :"connectionURL" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"accountName", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"containerName", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"accessKey", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"rootPath", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"connectionURL", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end

