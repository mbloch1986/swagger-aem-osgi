# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheFelixHttpSslfilterSslFilterProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"ssl-forward.header",
    :"ssl-forward.value",
    :"ssl-forward-cert.header",
    :"rewrite.absolute.urls"
  ]

  @type t :: %__MODULE__{
    :"ssl-forward.header" => ConfigNodePropertyString,
    :"ssl-forward.value" => ConfigNodePropertyString,
    :"ssl-forward-cert.header" => ConfigNodePropertyString,
    :"rewrite.absolute.urls" => ConfigNodePropertyBoolean
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.OrgApacheFelixHttpSslfilterSslFilterProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"ssl-forward.header", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"ssl-forward.value", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"ssl-forward-cert.header", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"rewrite.absolute.urls", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
  end
end

