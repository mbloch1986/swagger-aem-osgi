# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"cq.commerce.asset.handler.fallback"
  ]

  @type t :: %__MODULE__{
    :"cq.commerce.asset.handler.fallback" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqCommerceImplAssetProductAssetHandlerProviderImplProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"cq.commerce.asset.handler.fallback", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end

