# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqCompatCodeupgradeImplUpgradeTaskIgnoreListProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"upgradeTaskIgnoreList"
  ]

  @type t :: %__MODULE__{
    :"upgradeTaskIgnoreList" => ConfigNodePropertyArray
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqCompatCodeupgradeImplUpgradeTaskIgnoreListProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"upgradeTaskIgnoreList", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
  end
end
