# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"java.naming.factory.initial",
    :"java.naming.provider.url"
  ]

  @type t :: %__MODULE__{
    :"java.naming.factory.initial" => ConfigNodePropertyString,
    :"java.naming.provider.url" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"java.naming.factory.initial", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"java.naming.provider.url", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end

