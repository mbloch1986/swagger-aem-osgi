# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteRepositoryHcImplDefaultLoginsHealthCheckProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"hc.tags",
    :"account.logins",
    :"console.logins"
  ]

  @type t :: %__MODULE__{
    :"hc.tags" => ConfigNodePropertyArray,
    :"account.logins" => ConfigNodePropertyArray,
    :"console.logins" => ConfigNodePropertyArray
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteRepositoryHcImplDefaultLoginsHealthCheckProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"hc.tags", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"account.logins", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"console.logins", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
  end
end

